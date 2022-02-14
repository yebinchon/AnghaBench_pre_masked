
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ p; } ;


 int FUNC_0 (struct mg_str,char*) ;
 struct mg_str FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*) ;
 struct mg_str FUNC_4 (struct mg_str const) ;
 struct mg_str FUNC_5 (struct mg_str const,int ,int) ;

__attribute__((used)) static const char *FUNC_6(void) {
  const struct mg_str VAR_2 =
      FUNC_1("I'm a.little_tea-pot,here's$my;spout~oink(oink)oink/!");
  {
    struct mg_str VAR_3 = FUNC_4(VAR_2);
    FUNC_0(
        VAR_3,
        "I%27m%20a.little_tea-pot,here%27s$my;spout~oink(oink)oink/%21");
    FUNC_2((void *) VAR_3.p);
  }
  {
    struct mg_str VAR_4 = FUNC_5(VAR_2, FUNC_3(((void*)0)), 0);
    FUNC_0(VAR_4,
                    "I%27m%20a%2elittle%5ftea%2dpot%2chere%27s%24my%3bspout%"
                    "7eoink%28oink%29oink%2f%21");
    FUNC_2((void *) VAR_4.p);
  }
  {
    struct mg_str VAR_5 = FUNC_5(VAR_2, FUNC_3(" /!"),
                                              VAR_1);
    FUNC_0(VAR_5,
                    "I%27m "
                    "a%2Elittle%5Ftea%2Dpot%2Chere%27s%24my%3Bspout%7Eoink%"
                    "28oink%29oink/!");
    FUNC_2((void *) VAR_5.p);
  }
  {
    struct mg_str VAR_6 = FUNC_5(
        VAR_2, FUNC_3("/!"),
        VAR_0 | VAR_1);
    FUNC_0(VAR_6,
                    "I%27m+a%2Elittle%5Ftea%2Dpot%2Chere%27s%24my%3Bspout%"
                    "7Eoink%28oink%29oink/!");
    FUNC_2((void *) VAR_6.p);
  }
  return ((void*)0);
}
