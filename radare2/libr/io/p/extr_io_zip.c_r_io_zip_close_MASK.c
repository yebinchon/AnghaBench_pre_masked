
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef int RIOZipFileObj ;
typedef TYPE_1__ RIODesc ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(RIODesc *VAR_0) {
 RIOZipFileObj *VAR_1;
 if (!VAR_0 || !VAR_0->data) {
  return -1;
 }
 VAR_1 = VAR_0->data;
 FUNC_0 (VAR_1);
 VAR_1 = VAR_0->data = ((void*)0);
 return 0;
}
