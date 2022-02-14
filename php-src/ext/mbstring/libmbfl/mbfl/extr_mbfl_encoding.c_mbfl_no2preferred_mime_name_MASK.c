
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* mime_name; } ;
typedef TYPE_1__ mbfl_encoding ;
typedef enum mbfl_no_encoding { ____Placeholder_mbfl_no_encoding } mbfl_no_encoding ;


 TYPE_1__* FUNC_0 (int) ;

const char *
FUNC_1(enum mbfl_no_encoding VAR_0)
{
 const mbfl_encoding *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != ((void*)0) && VAR_1->mime_name != ((void*)0) && VAR_1->mime_name[0] != '\0') {
  return VAR_1->mime_name;
 } else {
  return ((void*)0);
 }
}
