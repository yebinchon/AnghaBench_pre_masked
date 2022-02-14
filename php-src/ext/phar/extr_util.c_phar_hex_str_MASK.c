
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int,int,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, size_t VAR_3, char **VAR_4)
{
 int VAR_5 = -1;
 size_t VAR_6 = 0;

 *VAR_4 = (char*)FUNC_1(VAR_3, 2, 1, FUNC_0(VAR_1));

 for (; VAR_6 < VAR_3; ++VAR_6) {
  (*VAR_4)[++VAR_5] = VAR_0[((const unsigned char *)VAR_2)[VAR_6] >> 4];
  (*VAR_4)[++VAR_5] = VAR_0[((const unsigned char *)VAR_2)[VAR_6] & 0x0F];
 }
 (*VAR_4)[++VAR_5] = '\0';
 return VAR_5;
}
