
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef struct _xmlHashEntry* xmlHashEntryPtr ;
typedef int xmlHashEntry ;
struct _xmlHashEntry {scalar_t__ valid; struct _xmlHashEntry* next; int name3; int name2; int name; } ;
struct TYPE_4__ {int size; struct _xmlHashEntry* table; } ;


 int FUNC_0 (struct _xmlHashEntry*,struct _xmlHashEntry*,int) ;
 int FUNC_1 (struct _xmlHashEntry*,int ,int) ;
 int FUNC_2 (struct _xmlHashEntry*) ;
 int FUNC_3 (int ,char*,int,int,unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 struct _xmlHashEntry* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(xmlHashTablePtr VAR_1, int VAR_2) {
    unsigned long VAR_3;
    int VAR_4, VAR_5;
    xmlHashEntryPtr VAR_6, VAR_7;
    struct _xmlHashEntry *VAR_8;




    if (VAR_1 == ((void*)0))
 return(-1);
    if (VAR_2 < 8)
        return(-1);
    if (VAR_2 > 8 * 2048)
 return(-1);

    VAR_4 = VAR_1->size;
    VAR_8 = VAR_1->table;
    if (VAR_8 == ((void*)0))
        return(-1);

    VAR_1->table = FUNC_5(VAR_2 * sizeof(xmlHashEntry));
    if (VAR_1->table == ((void*)0)) {
 VAR_1->table = VAR_8;
 return(-1);
    }
    FUNC_1(VAR_1->table, 0, VAR_2 * sizeof(xmlHashEntry));
    VAR_1->size = VAR_2;







    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
 if (VAR_8[VAR_5].valid == 0)
     continue;
 VAR_3 = FUNC_4(VAR_1, VAR_8[VAR_5].name, VAR_8[VAR_5].name2,
    VAR_8[VAR_5].name3);
 FUNC_0(&(VAR_1->table[VAR_3]), &(VAR_8[VAR_5]), sizeof(xmlHashEntry));
 VAR_1->table[VAR_3].next = ((void*)0);
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
 VAR_6 = VAR_8[VAR_5].next;
 while (VAR_6) {
     VAR_7 = VAR_6->next;





     VAR_3 = FUNC_4(VAR_1, VAR_6->name, VAR_6->name2,
                      VAR_6->name3);
     if (VAR_1->table[VAR_3].valid == 0) {
  FUNC_0(&(VAR_1->table[VAR_3]), VAR_6, sizeof(xmlHashEntry));
  VAR_1->table[VAR_3].next = ((void*)0);
  FUNC_2(VAR_6);
     } else {
  VAR_6->next = VAR_1->table[VAR_3].next;
  VAR_1->table[VAR_3].next = VAR_6;
     }





     VAR_6 = VAR_7;
 }
    }

    FUNC_2(VAR_8);






    return(0);
}
