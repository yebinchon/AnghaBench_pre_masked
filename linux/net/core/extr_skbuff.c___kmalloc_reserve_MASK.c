
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (size_t,int,int) ;

__attribute__((used)) static void *FUNC_2(size_t VAR_2, gfp_t VAR_3, int VAR_4,
          unsigned long VAR_5, bool *VAR_6)
{
 void *VAR_7;
 bool VAR_8 = 0;





 VAR_7 = FUNC_1(VAR_2,
     VAR_3 | VAR_0 | VAR_1,
     VAR_4);
 if (VAR_7 || !(FUNC_0(VAR_3)))
  goto out;


 VAR_8 = 1;
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);

out:
 if (VAR_6)
  *VAR_6 = VAR_8;

 return VAR_7;
}
