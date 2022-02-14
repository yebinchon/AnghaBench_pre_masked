
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int buf2 ;
struct TYPE_4__ {int (* is_valid_offset ) (int ,int,int ) ;int (* read_at ) (int ,int,int *,int) ;int io; } ;
struct TYPE_5__ {TYPE_1__ iob; } ;
typedef TYPE_1__ RIOBind ;
typedef TYPE_2__ RAnal ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int *,int) ;

__attribute__((used)) static ut64 FUNC_4(RAnal *VAR_0, const ut8 *VAR_1, int VAR_2) {
 ut64 VAR_3;
 ut8 VAR_4[32];
 RIOBind *VAR_5 = &VAR_0->iob;
 if (VAR_2 > sizeof (VAR_4)) {
  VAR_2 = sizeof (VAR_4);
 }
 VAR_3 = FUNC_1 (VAR_1, VAR_2);
 if (!VAR_3) {
  return 1;
 }
 if (VAR_3 < 0x1000) return 0;
 if (VAR_3 > 0xffffffffffffLL) return 0;

 if (VAR_5->read_at (VAR_5->io, VAR_3, VAR_4, VAR_2) != VAR_2) return 0;
 return FUNC_0 (VAR_4, VAR_2)? 0: VAR_3;

}
