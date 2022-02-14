
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svg_document ;
typedef int keyword ;
typedef int fz_matrix ;
typedef int fz_context ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,float,float,int,float,float) ;
 int FUNC_2 (float) ;
 int FUNC_3 (float,float) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (float,float) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char const) ;
 scalar_t__ FUNC_8 (char const) ;
 scalar_t__ FUNC_9 (char const) ;
 scalar_t__ FUNC_10 (char const) ;
 char* FUNC_11 (float*,char const*) ;
 float FUNC_12 (float) ;

fz_matrix
FUNC_13(fz_context *VAR_2, svg_document *VAR_3, const char *VAR_4, fz_matrix VAR_5)
{
 char VAR_6[20];
 int VAR_7;
 float VAR_8[6];
 int VAR_9;

 VAR_9 = 0;
 VAR_7 = 0;

 while (*VAR_4)
 {
  while (FUNC_10(*VAR_4))
   VAR_4 ++;
  if (*VAR_4 == 0)
   break;





  VAR_7 = 0;
  while (FUNC_7(*VAR_4) && VAR_7 < (int)sizeof(VAR_6) - 1)
   VAR_6[VAR_7++] = *VAR_4++;
  VAR_6[VAR_7] = 0;

  if (VAR_7 == 0)
   FUNC_4(VAR_2, VAR_1, "expected keyword in transform attribute");

  while (FUNC_9(*VAR_4))
   VAR_4 ++;

  if (*VAR_4 != '(')
   FUNC_4(VAR_2, VAR_1, "expected opening parenthesis in transform attribute");
  VAR_4 ++;





  VAR_9 = 0;
  while (*VAR_4 && *VAR_4 != ')' && VAR_9 < 6)
  {
   while (FUNC_10(*VAR_4))
    VAR_4 ++;
   if (FUNC_8(*VAR_4))
    VAR_4 = FUNC_11(&VAR_8[VAR_9++], VAR_4);
   else
    break;
  }

  if (*VAR_4 != ')')
   FUNC_4(VAR_2, VAR_1, "expected closing parenthesis in transform attribute");
  VAR_4 ++;





  if (!FUNC_6(VAR_6, "matrix"))
  {
   if (VAR_9 != 6)
    FUNC_4(VAR_2, VAR_1, "wrong number of arguments to matrix(): %d", VAR_9);
   VAR_5 = FUNC_0(FUNC_1(VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4], VAR_8[5]), VAR_5);
  }

  else if (!FUNC_6(VAR_6, "translate"))
  {
   if (VAR_9 != 2)
    FUNC_4(VAR_2, VAR_1, "wrong number of arguments to translate(): %d", VAR_9);
   VAR_5 = FUNC_0(FUNC_5(VAR_8[0], VAR_8[1]), VAR_5);
  }

  else if (!FUNC_6(VAR_6, "scale"))
  {
   if (VAR_9 == 1)
    VAR_5 = FUNC_0(FUNC_3(VAR_8[0], VAR_8[0]), VAR_5);
   else if (VAR_9 == 2)
    VAR_5 = FUNC_0(FUNC_3(VAR_8[0], VAR_8[1]), VAR_5);
   else
    FUNC_4(VAR_2, VAR_1, "wrong number of arguments to scale(): %d", VAR_9);
  }

  else if (!FUNC_6(VAR_6, "rotate"))
  {
   if (VAR_9 != 1)
    FUNC_4(VAR_2, VAR_1, "wrong number of arguments to rotate(): %d", VAR_9);
   VAR_5 = FUNC_0(FUNC_2(VAR_8[0]), VAR_5);
  }

  else if (!FUNC_6(VAR_6, "skewX"))
  {
   if (VAR_9 != 1)
    FUNC_4(VAR_2, VAR_1, "wrong number of arguments to skewX(): %d", VAR_9);
   VAR_5 = FUNC_0(FUNC_1(1, 0, FUNC_12(VAR_8[0] * VAR_0), 1, 0, 0), VAR_5);
  }

  else if (!FUNC_6(VAR_6, "skewY"))
  {
   if (VAR_9 != 1)
    FUNC_4(VAR_2, VAR_1, "wrong number of arguments to skewY(): %d", VAR_9);
   VAR_5 = FUNC_0(FUNC_1(1, FUNC_12(VAR_8[0] * VAR_0), 0, 1, 0, 0), VAR_5);
  }

  else
  {
   FUNC_4(VAR_2, VAR_1, "unknown transform function: %s", VAR_6);
  }
 }

 return VAR_5;
}
