
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int cache ;
struct TYPE_4__ {int (* read_at ) (int ,scalar_t__,int *,int) ;int io; } ;
struct TYPE_5__ {TYPE_1__ iob; } ;
typedef TYPE_2__ RAnal ;


 scalar_t__ FUNC_0 (scalar_t__,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,int const) ;
 int FUNC_2 (int ,scalar_t__,int *,int) ;
 int FUNC_3 (int ,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_4(RAnal *VAR_2, ut64 VAR_3, ut8 *VAR_4, int VAR_5) {
 static ut8 VAR_6[1024];
 const int VAR_7 = sizeof (VAR_6);

 if (VAR_5 < 1) {
  return 0;
 }
 if (VAR_5 > VAR_7) {
  int VAR_8 = VAR_2->iob.read_at (VAR_2->iob.io, VAR_3, VAR_4, VAR_5);
  FUNC_1 (VAR_6, VAR_4, VAR_7);
  VAR_1 = VAR_3;
  return VAR_8;
 }

 ut64 VAR_9 = FUNC_0 (VAR_3, VAR_5)? VAR_0: VAR_3 + VAR_5;
 ut64 VAR_10 = FUNC_0 (VAR_1, VAR_7)? VAR_0: VAR_1 + VAR_7;
 bool VAR_11 = ((VAR_3 != VAR_0) && (VAR_3 >= VAR_1) && (VAR_9 < VAR_10));
 if (VAR_11) {
  FUNC_1 (VAR_4, VAR_6 + (VAR_3 - VAR_1), VAR_5);
 } else {
  VAR_2->iob.read_at (VAR_2->iob.io, VAR_3, VAR_6, sizeof (VAR_6));
  FUNC_1 (VAR_4, VAR_6, VAR_5);
  VAR_1 = VAR_3;
 }
 return VAR_5;
}
