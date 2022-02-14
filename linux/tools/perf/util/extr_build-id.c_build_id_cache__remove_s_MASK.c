
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*,char*,size_t const) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,size_t const) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (size_t const) ;

int FUNC_9(const char *VAR_2)
{
 const size_t VAR_3 = VAR_1;
 char *VAR_4 = FUNC_8(VAR_3),
      *VAR_5 = FUNC_8(VAR_3), *VAR_6;
 int VAR_7 = -1;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  goto out_free;

 if (!FUNC_1(VAR_2, VAR_5, VAR_3))
  goto out_free;

 if (FUNC_0(VAR_5, VAR_0))
  goto out_free;

 if (FUNC_3(VAR_5, VAR_4, VAR_3 - 1) < 0)
  goto out_free;

 if (FUNC_7(VAR_5))
  goto out_free;




 VAR_6 = FUNC_6(VAR_5, '/') + 1;
 FUNC_5(VAR_6, VAR_3 - (VAR_6 - VAR_5), "%s", VAR_4);

 if (FUNC_4(VAR_5))
  goto out_free;

 VAR_7 = 0;
out_free:
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 return VAR_7;
}
