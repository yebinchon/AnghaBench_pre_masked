
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
 int FUNC_3 (char*,int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int,char const*) ;
 int FUNC_5 (char*,char*,...) ;

void
FUNC_6(int VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_4(VAR_3, VAR_4);
 char VAR_7[8 * 5 + 1];
 char *VAR_8 = VAR_7;
 int VAR_9,
    VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_5);
 VAR_10 = FUNC_0(VAR_10, 8);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
 {
  VAR_8 += FUNC_5(VAR_8, "0x%02x", (unsigned char) VAR_4[VAR_9]);
  if (VAR_9 < VAR_10 - 1)
   VAR_8 += FUNC_5(VAR_8, " ");
 }

 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_3("invalid byte sequence for encoding \"%s\": %s",
     VAR_2[VAR_3].name,
     VAR_7)));
}
