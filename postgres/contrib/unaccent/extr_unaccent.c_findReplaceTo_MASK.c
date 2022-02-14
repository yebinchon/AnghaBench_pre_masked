
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* nextChar; scalar_t__ replaceTo; } ;
typedef TYPE_1__ TrieChar ;



__attribute__((used)) static TrieChar *
FUNC_0(TrieChar *VAR_0, const unsigned char *VAR_1, int VAR_2,
     int *VAR_3)
{
 TrieChar *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 *VAR_3 = 0;

 while (VAR_0 && VAR_5 < VAR_2)
 {
  VAR_0 = VAR_0 + VAR_1[VAR_5];
  VAR_5++;

  if (VAR_0->replaceTo)
  {
   VAR_4 = VAR_0;
   *VAR_3 = VAR_5;
  }

  VAR_0 = VAR_0->nextChar;
 }

 return VAR_4;
}
