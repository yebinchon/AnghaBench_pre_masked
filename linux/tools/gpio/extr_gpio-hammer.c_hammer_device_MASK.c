
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swirr ;
struct gpiohandle_data {int* values; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,struct gpiohandle_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,unsigned int*,int,int ,struct gpiohandle_data*,char*) ;
 int FUNC_5 (int,struct gpiohandle_data*) ;
 int FUNC_6 (int**,int ,int) ;
 int FUNC_7 (int) ;
 int VAR_1 ;

int FUNC_8(const char *VAR_2, unsigned int *VAR_3, int VAR_4,
    unsigned int VAR_5)
{
 struct gpiohandle_data VAR_6;
 char VAR_7[] = "-\\|/";
 int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_6(&VAR_6.values, 0, sizeof(VAR_6.values));
 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4,
        VAR_0, &VAR_6,
        "gpio-hammer");
 if (VAR_9 < 0)
  goto exit_error;
 else
  VAR_8 = VAR_9;

 VAR_9 = FUNC_2(VAR_8, &VAR_6);
 if (VAR_9 < 0)
  goto exit_close_error;

 FUNC_1(VAR_1, "Hammer lines [");
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_1(VAR_1, "%d", VAR_3[VAR_10]);
  if (VAR_10 != (VAR_4 - 1))
   FUNC_1(VAR_1, ", ");
 }
 FUNC_1(VAR_1, "] on %s, initial states: [", VAR_2);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  FUNC_1(VAR_1, "%d", VAR_6.values[VAR_10]);
  if (VAR_10 != (VAR_4 - 1))
   FUNC_1(VAR_1, ", ");
 }
 FUNC_1(VAR_1, "]\n");


 VAR_11 = 0;
 while (1) {

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   VAR_6.values[VAR_10] = !VAR_6.values[VAR_10];

  VAR_9 = FUNC_5(VAR_8, &VAR_6);
  if (VAR_9 < 0)
   goto exit_close_error;


  VAR_9 = FUNC_2(VAR_8, &VAR_6);
  if (VAR_9 < 0)
   goto exit_close_error;

  FUNC_1(VAR_1, "[%c] ", VAR_7[VAR_11]);
  VAR_11++;
  if (VAR_11 == sizeof(VAR_7)-1)
   VAR_11 = 0;

  FUNC_1(VAR_1, "[");
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   FUNC_1(VAR_1, "%d: %d", VAR_3[VAR_10], VAR_6.values[VAR_10]);
   if (VAR_10 != (VAR_4 - 1))
    FUNC_1(VAR_1, ", ");
  }
  FUNC_1(VAR_1, "]\r");
  FUNC_0(VAR_1);
  FUNC_7(1);
  VAR_12++;
  if (VAR_5 && VAR_12 == VAR_5)
   break;
 }
 FUNC_1(VAR_1, "\n");
 VAR_9 = 0;

exit_close_error:
 FUNC_3(VAR_8);
exit_error:
 return VAR_9;
}
