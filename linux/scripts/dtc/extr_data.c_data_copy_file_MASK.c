
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {size_t len; scalar_t__ val; } ;
typedef int FILE ;


 int VAR_0 ;
 struct data FUNC_0 (struct data,int ,int *) ;
 struct data FUNC_1 (struct data,size_t) ;
 int FUNC_2 (char*,...) ;
 struct data VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 size_t FUNC_5 (scalar_t__,int,size_t,int *) ;
 int FUNC_6 (int ) ;

struct data FUNC_7(FILE *VAR_3, size_t VAR_4)
{
 struct data VAR_5 = VAR_1;

 VAR_5 = FUNC_0(VAR_5, VAR_0, ((void*)0));
 while (!FUNC_3(VAR_3) && (VAR_5.len < VAR_4)) {
  size_t VAR_6, VAR_7;

  if (VAR_4 == -1)
   VAR_6 = 4096;
  else
   VAR_6 = VAR_4 - VAR_5.len;

  VAR_5 = FUNC_1(VAR_5, VAR_6);
  VAR_7 = FUNC_5(VAR_5.val + VAR_5.len, 1, VAR_6, VAR_3);

  if (FUNC_4(VAR_3))
   FUNC_2("Error reading file into data: %s", FUNC_6(VAR_2));

  if (VAR_5.len + VAR_7 < VAR_5.len)
   FUNC_2("Overflow reading file into data\n");

  VAR_5.len += VAR_7;
 }

 return VAR_5;
}
