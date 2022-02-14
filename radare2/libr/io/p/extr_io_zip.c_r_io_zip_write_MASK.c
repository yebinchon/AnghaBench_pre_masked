
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_10__ {scalar_t__ off; } ;
struct TYPE_9__ {TYPE_1__* data; } ;
struct TYPE_8__ {int perm; int modified; int b; } ;
typedef TYPE_1__ RIOZipFileObj ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int const*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(RIO *VAR_1, RIODesc *VAR_2, const ut8 *VAR_3, int VAR_4) {
 RIOZipFileObj *VAR_5;
 int VAR_6 = 0;
 if (!VAR_2 || !VAR_2->data || !VAR_3) {
  return -1;
 }
 VAR_5 = VAR_2->data;
 if (!(VAR_5->perm & VAR_0)) {
  return -1;
 }
 if (FUNC_1 (VAR_5->b) + VAR_4 >= FUNC_0 (VAR_5->b)) {
  FUNC_4 (VAR_5, VAR_4);
 }
 if (FUNC_0 (VAR_5->b) < VAR_1->off) {
  VAR_1->off = FUNC_0 (VAR_5->b);
 }
 VAR_5->modified = 1;
 VAR_6 = FUNC_2 (VAR_5->b, VAR_1->off, VAR_3, VAR_4);


 FUNC_3 (VAR_5);
 return VAR_6;
}
