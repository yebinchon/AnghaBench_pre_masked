
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_8__ {int off; } ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int b; } ;
typedef TYPE_1__ RIOZipFileObj ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int VAR_0 ;



 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ut64 FUNC_3(RIO *VAR_1, RIODesc *VAR_2, ut64 VAR_3, int VAR_4) {
 RIOZipFileObj *VAR_5;
 ut64 VAR_6 = 0;

 if (!VAR_2 || !VAR_2->data) {
  return -1;
 }

 VAR_5 = VAR_2->data;
 VAR_6 = FUNC_2 (VAR_5->b);

 switch (VAR_4) {
 case 128:
  VAR_6 = (FUNC_1 (VAR_5->b) < VAR_3)? FUNC_1 (VAR_5->b): VAR_3;
  VAR_1->off = VAR_6;
  FUNC_0 (VAR_5->b, VAR_6, VAR_0);
  return VAR_6;
 case 130:
  VAR_6 = (FUNC_1 (VAR_5->b) < (VAR_3 + FUNC_2 (VAR_5->b)))? FUNC_1 (VAR_5->b): VAR_3 + FUNC_2 (VAR_5->b);
  VAR_1->off = VAR_6;
  FUNC_0 (VAR_5->b, VAR_6, VAR_0);
  return VAR_6;
 case 129:
  VAR_6 = FUNC_1 (VAR_5->b);
  VAR_1->off = VAR_6;
  FUNC_0 (VAR_5->b, VAR_6, VAR_0);
  return VAR_6;
 }
 return VAR_6;
}
