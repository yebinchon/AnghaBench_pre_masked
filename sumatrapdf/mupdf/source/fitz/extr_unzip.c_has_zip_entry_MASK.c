
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_entry ;
typedef int fz_zip_archive ;
typedef int fz_context ;
typedef int fz_archive ;


 int * FUNC_0 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_1(fz_context *VAR_0, fz_archive *VAR_1, const char *VAR_2)
{
 fz_zip_archive *VAR_3 = (fz_zip_archive *) VAR_1;
 zip_entry *VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 return VAR_4 != ((void*)0);
}
