
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct module {int dev_table_buf; int name; } ;
typedef int acpi_id ;
struct TYPE_7__ {scalar_t__ id; } ;
struct TYPE_6__ {scalar_t__ id; } ;


 int FUNC_0 (void*,int ,TYPE_2__**) ;
 int FUNC_1 (void*,int ,TYPE_2__**,TYPE_1__**) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long const,void*) ;
 TYPE_2__** VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char const*,char const*) ;
 char FUNC_5 (char const) ;

__attribute__((used)) static void FUNC_6(void *VAR_6, unsigned long VAR_7,
    struct module *VAR_8)
{
 const unsigned long VAR_9 = VAR_2;
 const unsigned int VAR_10 = (VAR_7 / VAR_9)-1;
 unsigned int VAR_11;

 FUNC_3(VAR_8->name, "pnp", VAR_7, VAR_9, VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  unsigned int VAR_12;
  FUNC_0(VAR_6 + VAR_11 * VAR_9, VAR_5, VAR_3);

  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   const char *VAR_13 = (char *)(*VAR_3)[VAR_12].id;
   int VAR_14, VAR_15;
   int VAR_16 = 0;

   if (!VAR_13[0])
    break;


   for (VAR_14 = 0; VAR_14 < VAR_11 && !VAR_16; VAR_14++) {
    FUNC_1(VAR_6 + VAR_14 * VAR_9,
         VAR_5,
         VAR_3, VAR_4);

    for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
     const char *VAR_17 =
      (char *)(*VAR_4)[VAR_15].id;

     if (!VAR_17[0])
      break;

     if (!FUNC_4(VAR_13, VAR_17)) {
      VAR_16 = 1;
      break;
     }
    }
   }


   if (!VAR_16) {
    char VAR_18[VAR_0];
    int VAR_19;

    FUNC_2(&VAR_8->dev_table_buf,
        "MODULE_ALIAS(\"pnp:d%s*\");\n", VAR_13);


    for (VAR_19 = 0; VAR_19 < sizeof(VAR_18); VAR_19++)
     VAR_18[VAR_19] = FUNC_5(VAR_13[VAR_19]);
    FUNC_2(&VAR_8->dev_table_buf,
        "MODULE_ALIAS(\"acpi*:%s:*\");\n", VAR_18);
   }
  }
 }
}
