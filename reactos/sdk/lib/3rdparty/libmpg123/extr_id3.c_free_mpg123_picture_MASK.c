
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; int description; int mime_type; } ;
typedef TYPE_1__ mpg123_picture ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(mpg123_picture * VAR_0)
{
 FUNC_1(&VAR_0->mime_type);
 FUNC_1(&VAR_0->description);
 if (VAR_0->data != ((void*)0))
  FUNC_0(VAR_0->data);
}
