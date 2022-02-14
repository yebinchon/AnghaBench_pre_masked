
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_wchar ;



__attribute__((used)) static pg_wchar
FUNC_0(const unsigned char *VAR_0)
{
 if ((*VAR_0 & 0x80) == 0)
  return (pg_wchar) VAR_0[0];
 else if ((*VAR_0 & 0xe0) == 0xc0)
  return (pg_wchar) (((VAR_0[0] & 0x1f) << 6) |
         (VAR_0[1] & 0x3f));
 else if ((*VAR_0 & 0xf0) == 0xe0)
  return (pg_wchar) (((VAR_0[0] & 0x0f) << 12) |
         ((VAR_0[1] & 0x3f) << 6) |
         (VAR_0[2] & 0x3f));
 else if ((*VAR_0 & 0xf8) == 0xf0)
  return (pg_wchar) (((VAR_0[0] & 0x07) << 18) |
         ((VAR_0[1] & 0x3f) << 12) |
         ((VAR_0[2] & 0x3f) << 6) |
         (VAR_0[3] & 0x3f));
 else

  return 0xffffffff;
}
