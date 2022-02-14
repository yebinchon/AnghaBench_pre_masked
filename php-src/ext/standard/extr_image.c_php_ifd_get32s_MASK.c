
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1)
{
 if (VAR_1) {
  return ((( char *)VAR_0)[0] << 24) | (((unsigned char *)VAR_0)[1] << 16)
        | (((unsigned char *)VAR_0)[2] << 8 ) | (((unsigned char *)VAR_0)[3] << 0 );
 } else {
  return ((( char *)VAR_0)[3] << 24) | (((unsigned char *)VAR_0)[2] << 16)
        | (((unsigned char *)VAR_0)[1] << 8 ) | (((unsigned char *)VAR_0)[0] << 0 );
 }
}
