
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int,char const*) ;
 int FUNC_5 (char*,char*,...) ;

void
FUNC_6(int VAR_3, int VAR_4,
         const char *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_4(VAR_3, VAR_5);
 char VAR_8[8 * 5 + 1];
 char *VAR_9 = VAR_8;
 int VAR_10,
    VAR_11;

 VAR_11 = FUNC_0(VAR_7, VAR_6);
 VAR_11 = FUNC_0(VAR_11, 8);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
 {
  VAR_9 += FUNC_5(VAR_9, "0x%02x", (unsigned char) VAR_5[VAR_10]);
  if (VAR_10 < VAR_11 - 1)
   VAR_9 += FUNC_5(VAR_9, " ");
 }

 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_3("character with byte sequence %s in encoding \"%s\" has no equivalent in encoding \"%s\"",
     VAR_8,
     VAR_2[VAR_3].name,
     VAR_2[VAR_4].name)));
}
