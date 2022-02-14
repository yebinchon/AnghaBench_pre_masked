
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_11__ {int * member_0; } ;
struct TYPE_10__ {int * member_1; int * member_0; } ;
struct TYPE_12__ {int key; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ line_type ;
typedef int key_type ;
struct TYPE_13__ {int fp; } ;
typedef TYPE_4__ inifile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (int *,int ,char*,size_t,size_t) ;
 int FUNC_5 (int ,int ,size_t,int *) ;
 int FUNC_6 (int ,size_t,int ) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(inifile *VAR_5, inifile *VAR_6, const key_type *VAR_7, zend_bool *VAR_8)
{
 size_t VAR_9 = 0, VAR_10 = 0, VAR_11;
 int VAR_12 = VAR_4;
 line_type VAR_13 = {{((void*)0),((void*)0)},{((void*)0)}};

 FUNC_6(VAR_6->fp, 0, VAR_3);
 FUNC_6(VAR_5->fp, 0, VAR_2);
 while(FUNC_3(VAR_6, &VAR_13)) {
  switch(FUNC_1(&VAR_13.key, VAR_7)) {
  case 0:
   if (VAR_8) {
    *VAR_8 = (zend_bool) 1;
   }
   VAR_11 = FUNC_7(VAR_6->fp);
   if (VAR_9 != VAR_10) {
    FUNC_6(VAR_6->fp, VAR_9, VAR_3);
    if (VAR_4 != FUNC_5(VAR_6->fp, VAR_5->fp, VAR_10 - VAR_9, ((void*)0))) {
     FUNC_4(((void*)0), VAR_0, "Could not copy [%zu - %zu] from temporary stream", VAR_10, VAR_9);
     VAR_12 = VAR_1;
    }
    FUNC_6(VAR_6->fp, VAR_11, VAR_3);
   }
   VAR_10 = VAR_9 = VAR_11;
   break;
  case 1:
   VAR_10 = FUNC_7(VAR_6->fp);
   break;
  case 2:

   FUNC_0(0);
   break;
  }
 }
 if (VAR_9 != VAR_10) {
  FUNC_6(VAR_6->fp, VAR_9, VAR_3);
  if (VAR_4 != FUNC_5(VAR_6->fp, VAR_5->fp, VAR_10 - VAR_9, ((void*)0))) {
   FUNC_4(((void*)0), VAR_0, "Could not copy [%zu - %zu] from temporary stream", VAR_10, VAR_9);
   VAR_12 = VAR_1;
  }
 }
 FUNC_2(&VAR_13);
 return VAR_12;
}
