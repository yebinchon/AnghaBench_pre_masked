
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (unsigned char const*,size_t,unsigned char const*) ;
 unsigned char* FUNC_1 (void const*,unsigned char const,size_t) ;
 void* FUNC_2 (unsigned char const*,size_t,unsigned char const*) ;
 void* FUNC_3 (unsigned char const*,size_t,unsigned char const*) ;
 void* FUNC_4 (unsigned char const*,unsigned char const*,unsigned char const*,size_t) ;

void *FUNC_5(const void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = VAR_0, *VAR_5 = VAR_2;


 if (!VAR_3) return (void *)VAR_4;


 if (VAR_1<VAR_3) return 0;


 VAR_4 = FUNC_1(VAR_0, *VAR_5, VAR_1);
 if (!VAR_4 || VAR_3==1) return (void *)VAR_4;
 VAR_1 -= VAR_4 - (const unsigned char *)VAR_0;
 if (VAR_1<VAR_3) return 0;
 if (VAR_3==2) return FUNC_3(VAR_4, VAR_1, VAR_5);
 if (VAR_3==3) return FUNC_2(VAR_4, VAR_1, VAR_5);
 if (VAR_3==4) return FUNC_0(VAR_4, VAR_1, VAR_5);

 return FUNC_4(VAR_4, VAR_4+VAR_1, VAR_5, VAR_3);
}
