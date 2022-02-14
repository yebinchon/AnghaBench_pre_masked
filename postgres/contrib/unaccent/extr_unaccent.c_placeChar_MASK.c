
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* replaceTo; int replacelen; struct TYPE_4__* nextChar; } ;
typedef TYPE_1__ TrieChar ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static TrieChar *
FUNC_7(TrieChar *VAR_2, const unsigned char *VAR_3, int VAR_4,
    const char *VAR_5, int VAR_6)
{
 TrieChar *VAR_7;

 if (!VAR_2)
  VAR_2 = (TrieChar *) FUNC_6(sizeof(TrieChar) * 256);

 FUNC_0(VAR_4 > 0);

 VAR_7 = VAR_2 + *VAR_3;

 if (VAR_4 <= 1)
 {
  if (VAR_7->replaceTo)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("duplicate source strings, first one will be used")));
  else
  {
   VAR_7->replacelen = VAR_6;
   VAR_7->replaceTo = (char *) FUNC_5(VAR_6);
   FUNC_4(VAR_7->replaceTo, VAR_5, VAR_6);
  }
 }
 else
 {
  VAR_7->nextChar = FUNC_7(VAR_7->nextChar, VAR_3 + 1, VAR_4 - 1,
           VAR_5, VAR_6);
 }

 return VAR_2;
}
