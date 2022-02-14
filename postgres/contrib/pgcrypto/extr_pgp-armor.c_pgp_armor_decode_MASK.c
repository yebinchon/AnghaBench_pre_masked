
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8 ;
struct TYPE_4__ {int len; scalar_t__ data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char const*,char const*,char const**,int) ;
 char* FUNC_4 (char const*,char,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char const*,int,char*) ;

int
FUNC_7(const uint8 *VAR_2, int VAR_3, StringInfo VAR_4)
{
 const uint8 *VAR_5 = VAR_2;
 const uint8 *VAR_6 = VAR_2 + VAR_3;
 long VAR_7;
 const uint8 *VAR_8,
      *VAR_9;
 const uint8 *VAR_10 = ((void*)0);
 uint8 VAR_11[4];
 int VAR_12;
 int VAR_13;
 int VAR_14 = VAR_1;


 VAR_12 = FUNC_3(VAR_2, VAR_6, &VAR_5, 0);
 if (VAR_12 <= 0)
  goto out;
 VAR_5 += VAR_12;


 VAR_12 = FUNC_3(VAR_5, VAR_6, &VAR_9, 1);
 if (VAR_12 <= 0)
  goto out;


 while (VAR_5 < VAR_9 && *VAR_5 != '\n' && *VAR_5 != '\r')
 {
  VAR_5 = FUNC_4(VAR_5, '\n', VAR_9 - VAR_5);
  if (!VAR_5)
   goto out;


  VAR_5++;
 }
 VAR_8 = VAR_5;


 for (VAR_5 = VAR_9; VAR_5 >= VAR_8; VAR_5--)
  if (*VAR_5 == '=')
  {
   VAR_10 = VAR_5 - 1;
   break;
  }
 if (VAR_10 == ((void*)0))
  goto out;


 if (FUNC_6(VAR_5 + 1, 4, VAR_11) != 3)
  goto out;
 VAR_7 = (((long) VAR_11[0]) << 16) + (((long) VAR_11[1]) << 8) + (long) VAR_11[2];


 VAR_13 = (int) FUNC_5(VAR_3);
 FUNC_2(VAR_4, VAR_13);
 VAR_14 = FUNC_6(VAR_8, VAR_10 - VAR_8, (uint8 *) VAR_4->data);
 if (VAR_14 > VAR_13)
  FUNC_1(VAR_0, "overflow - decode estimate too small");
 if (VAR_14 >= 0)
 {
  if (FUNC_0((uint8 *) VAR_4->data, VAR_14) == VAR_7)
   VAR_4->len += VAR_14;
  else
   VAR_14 = VAR_1;
 }
out:
 return VAR_14;
}
