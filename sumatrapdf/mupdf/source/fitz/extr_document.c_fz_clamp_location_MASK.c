
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chapter; int page; } ;
typedef TYPE_1__ fz_location ;
typedef int fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;

fz_location FUNC_2(fz_context *VAR_0, fz_document *VAR_1, fz_location VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1);
 int VAR_4;
 if (VAR_2.chapter < 0) VAR_2.chapter = 0;
 if (VAR_2.chapter >= VAR_3) VAR_2.chapter = VAR_3 - 1;
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2.chapter);
 if (VAR_2.page < 0) VAR_2.page = 0;
 if (VAR_2.page >= VAR_4) VAR_2.page = VAR_4 - 1;
 return VAR_2;
}
