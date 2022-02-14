
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {struct symbol* visited; void* expansion_trail; struct string_list* defn; } ;
struct string_list {int tag; char* string; struct string_list* next; } ;
struct TYPE_2__ {char* name; } ;
 struct symbol* FUNC_0 (char*,size_t,struct string_list*,int ) ;
 struct string_list** FUNC_1 (int) ;
 struct string_list* FUNC_2 (int ,int ,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,char*) ;
 void* VAR_1 ;
 struct symbol* FUNC_4 (char*,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (char*) ;
 unsigned long FUNC_7 (char*,unsigned long) ;
 unsigned long FUNC_8 (char,unsigned long) ;
 TYPE_1__* VAR_3 ;
 struct symbol* VAR_4 ;

__attribute__((used)) static unsigned long FUNC_9(struct symbol *VAR_5, unsigned long VAR_6)
{
 struct string_list *VAR_7 = VAR_5->defn;
 struct string_list **VAR_8, **VAR_9;
 struct string_list *VAR_10, **VAR_11;
 int VAR_12 = 1;

 if (!VAR_7)
  return VAR_6;

 VAR_10 = VAR_7;
 while ((VAR_10 = VAR_10->next) != ((void*)0))
  VAR_12++;

 VAR_9 = FUNC_1(VAR_12 * sizeof(*VAR_8));
 VAR_8 = VAR_9 + VAR_12;
 VAR_11 = VAR_8 - 1;

 *(VAR_11--) = VAR_7;
 while ((VAR_7 = VAR_7->next) != ((void*)0))
  *(VAR_11--) = VAR_7;

 while (VAR_9 != VAR_8) {
  struct string_list *VAR_13;
  struct symbol *VAR_14;

  VAR_13 = *(VAR_9++);
  switch (VAR_13->tag) {
  case 131:
   if (VAR_2)
    FUNC_5(VAR_0, "%s ", VAR_13->string);
   VAR_6 = FUNC_7(VAR_13->string, VAR_6);
   VAR_6 = FUNC_8(' ', VAR_6);
   break;

  case 132:
  case 129:
   VAR_14 = FUNC_4(VAR_13->string, VAR_13->tag, 0);

   if (VAR_14->expansion_trail) {
    if (VAR_2)
     FUNC_5(VAR_0, "%s ", VAR_13->string);
    VAR_6 = FUNC_7(VAR_13->string, VAR_6);
    VAR_6 = FUNC_8(' ', VAR_6);
   } else {
    VAR_14->expansion_trail = VAR_1;
    VAR_1 = VAR_14;
    VAR_6 = FUNC_9(VAR_14, VAR_6);
   }
   break;

  case 130:
  case 128:
  case 133:
   VAR_14 = FUNC_4(VAR_13->string, VAR_13->tag, 0);
   if (!VAR_14) {
    struct string_list *VAR_15;

    FUNC_3("expand undefined %s %s",
            VAR_3[VAR_13->tag].name,
            VAR_13->string);
    VAR_15 = FUNC_2(FUNC_6
      (VAR_3[VAR_13->tag].name),
      FUNC_6(VAR_13->string),
      FUNC_6("{"),
      FUNC_6("UNKNOWN"),
      FUNC_6("}"), ((void*)0));
    VAR_14 =
        FUNC_0(VAR_13->string, VAR_13->tag, VAR_15, 0);
   }
   if (VAR_14->expansion_trail) {
    if (VAR_2) {
     FUNC_5(VAR_0, "%s %s ",
      VAR_3[VAR_13->tag].name,
      VAR_13->string);
    }

    VAR_6 = FUNC_7(VAR_3[VAR_13->tag].name,
          VAR_6);
    VAR_6 = FUNC_8(' ', VAR_6);
    VAR_6 = FUNC_7(VAR_13->string, VAR_6);
    VAR_6 = FUNC_8(' ', VAR_6);
   } else {
    VAR_14->expansion_trail = VAR_1;
    VAR_1 = VAR_14;
    VAR_6 = FUNC_9(VAR_14, VAR_6);
   }
   break;
  }
 }

 {
  static struct symbol **VAR_16 = &VAR_4;

  if (!VAR_5->visited) {
   *VAR_16 = VAR_5;
   VAR_16 = &VAR_5->visited;
   VAR_5->visited = (struct symbol *)-1L;
  }
 }

 return VAR_6;
}
