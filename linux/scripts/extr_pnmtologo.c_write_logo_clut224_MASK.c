
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int red; unsigned int green; unsigned int blue; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 TYPE_1__* VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__** VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_7(void)
{
    unsigned int VAR_9, VAR_10, VAR_11;


    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
     for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  if (FUNC_3(VAR_3[VAR_9][VAR_10], VAR_1[VAR_11]))
      break;
     if (VAR_11 == VAR_2) {
  if (VAR_2 == VAR_0)
      FUNC_0("Image has more than %d colors\n"
   "Use ppmquant(1) to reduce the number of colors\n",
   VAR_0);
  VAR_1[VAR_2++] = VAR_3[VAR_9][VAR_10];
     }
 }


    FUNC_5();


    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
     for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  if (FUNC_3(VAR_3[VAR_9][VAR_10], VAR_1[VAR_11]))
      break;
     FUNC_6(VAR_11+32);
 }
    FUNC_2("\n};\n\n", VAR_7);


    FUNC_1(VAR_7, "static unsigned char %s_clut[] __initdata = {\n",
     VAR_6);
    VAR_8 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
 FUNC_6(VAR_1[VAR_9].red);
 FUNC_6(VAR_1[VAR_9].green);
 FUNC_6(VAR_1[VAR_9].blue);
    }


    FUNC_4();
}
