
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1)
{
 const unsigned char *VAR_2;
 for (VAR_2=VAR_0; *VAR_2<0xff && FUNC_0(VAR_2+1, VAR_1); VAR_2+=FUNC_1(VAR_2)+1);
 return *VAR_2;
}
