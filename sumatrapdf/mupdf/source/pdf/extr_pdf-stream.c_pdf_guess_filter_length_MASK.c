
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, const char *VAR_1)
{
 if (!FUNC_0(VAR_1, "ASCIIHexDecode"))
  return VAR_0 / 2;
 if (!FUNC_0(VAR_1, "ASCII85Decode"))
  return VAR_0 * 4 / 5;
 if (!FUNC_0(VAR_1, "FlateDecode"))
  return VAR_0 * 3;
 if (!FUNC_0(VAR_1, "RunLengthDecode"))
  return VAR_0 * 3;
 if (!FUNC_0(VAR_1, "LZWDecode"))
  return VAR_0 * 2;
 return VAR_0;
}
