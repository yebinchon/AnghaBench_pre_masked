
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;
 char*** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_info_buffer *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = -1;
 char *VAR_8;

 FUNC_2(VAR_3, "\n%s:", VAR_4);
 FUNC_0(&VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_8 = VAR_1[VAR_6][VAR_5];
  if (VAR_8) {
   if (VAR_7 < 0) {
    FUNC_2(VAR_3, "\n");
    VAR_7++;
   }
   FUNC_2(VAR_3, "%i: %s\n", VAR_6, VAR_8);
  }
 }
 FUNC_1(&VAR_2);
 if (VAR_7 < 0)
  FUNC_2(VAR_3, " NOT ENABLED IN CONFIG\n");
 return VAR_7;
}
