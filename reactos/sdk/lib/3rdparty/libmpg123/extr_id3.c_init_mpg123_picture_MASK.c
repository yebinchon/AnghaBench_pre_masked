
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; scalar_t__ size; scalar_t__ type; int description; int mime_type; } ;
typedef TYPE_1__ mpg123_picture ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(mpg123_picture *VAR_0)
{
 FUNC_0(&VAR_0->mime_type);
 FUNC_0(&VAR_0->description);
 VAR_0->type = 0;
 VAR_0->size = 0;
 VAR_0->data = ((void*)0);
}
