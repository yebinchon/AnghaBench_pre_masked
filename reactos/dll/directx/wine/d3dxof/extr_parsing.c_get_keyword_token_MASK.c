
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parse_buffer ;
typedef int WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static WORD FUNC_1(parse_buffer* VAR_14)
{
  if (FUNC_0(VAR_14, "template"))
    return VAR_9;
  if (FUNC_0(VAR_14, "WORD"))
    return VAR_13;
  if (FUNC_0(VAR_14, "DWORD"))
    return VAR_4;
  if (FUNC_0(VAR_14, "FLOAT"))
    return VAR_5;
  if (FUNC_0(VAR_14, "DOUBLE"))
    return VAR_3;
  if (FUNC_0(VAR_14, "CHAR"))
    return VAR_1;
  if (FUNC_0(VAR_14, "UCHAR"))
    return VAR_10;
  if (FUNC_0(VAR_14, "SWORD"))
    return VAR_8;
  if (FUNC_0(VAR_14, "SDWORD"))
    return VAR_7;
  if (FUNC_0(VAR_14, "VOID"))
    return VAR_12;
  if (FUNC_0(VAR_14, "STRING"))
    return VAR_6;
  if (FUNC_0(VAR_14, "UNICODE"))
    return VAR_11;
  if (FUNC_0(VAR_14, "CSTRING"))
    return VAR_2;
  if (FUNC_0(VAR_14, "array"))
    return VAR_0;

  return 0;
}
