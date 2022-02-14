
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iwinfo_ops {int dummy; } ;
struct TYPE_4__ {int minq; int maxq; int boffset; int bfactor; int led; struct TYPE_4__* next; } ;
typedef TYPE_1__ rule_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int) ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct iwinfo_ops const**,char*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct iwinfo_ops const*,char*) ;
 int FUNC_8 (char*,char*,int*) ;
 int FUNC_9 (int ,char*,char*,int,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int) ;

int FUNC_12(int VAR_5, char **VAR_6)
{
 int VAR_7,VAR_8,VAR_9,VAR_10,VAR_11;
 const struct iwinfo_ops *VAR_12 = ((void*)0);
 rule_t *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

 if (VAR_5 < 9 || ( (VAR_5-4) % 5 != 0 ) )
 {
  FUNC_6("syntax: %s (ifname) (refresh) (threshold) (rule) [rule] ...\n", VAR_6[0]);
  FUNC_6("  rule: (sysfs-name) (minq) (maxq) (offset) (factore)\n");
  return 1;
 }

 VAR_4 = VAR_6[1];


 if ( FUNC_8(VAR_6[2], "%d", &VAR_10) != 1 )
  return 1;


 if ( FUNC_8(VAR_6[3], "%d", &VAR_11) != 1 )
  return 1;

 FUNC_5("rssileds", VAR_3, VAR_1);
 FUNC_9(VAR_2, "monitoring %s, refresh rate %d, threshold %d\n", VAR_4, VAR_10, VAR_11);

 VAR_14 = VAR_13;
 for (VAR_7=4; VAR_7<VAR_5; VAR_7=VAR_7+5) {
  if (! VAR_14)
  {

   VAR_14 = FUNC_0(sizeof(rule_t),1);
   VAR_13 = VAR_14;
  }
  else
  {

   VAR_14->next = FUNC_0(sizeof(rule_t),1);
   VAR_14 = VAR_14->next;
  }

  if ( FUNC_1(&(VAR_14->led), VAR_6[VAR_7]) )
   return 1;

  if ( FUNC_8(VAR_6[VAR_7+1], "%d", &(VAR_14->minq)) != 1 )
   return 1;

  if ( FUNC_8(VAR_6[VAR_7+2], "%d", &(VAR_14->maxq)) != 1 )
   return 1;

  if ( FUNC_8(VAR_6[VAR_7+3], "%d", &(VAR_14->boffset)) != 1 )
   return 1;

  if ( FUNC_8(VAR_6[VAR_7+4], "%d", &(VAR_14->bfactor)) != 1 )
   return 1;
 }
 FUNC_3(VAR_13);

 VAR_9 = -1;
 do {
  VAR_8 = FUNC_7(VAR_12, VAR_4);
  if ( VAR_8 < VAR_9 - VAR_11 || VAR_8 > VAR_9 + VAR_11 ) {
   FUNC_10(VAR_13, VAR_8);
   VAR_9=VAR_8;
  };

  if ( VAR_8 == -1 && VAR_9 == -1 ) {
   if (VAR_12) {
    FUNC_2();
    VAR_12=((void*)0);
    FUNC_11(VAR_0);
   }
   while (FUNC_4(&VAR_12, VAR_4))
    FUNC_11(VAR_0);
  }
  FUNC_11(VAR_10);
 } while(1);

 FUNC_2();

 return 0;
}
