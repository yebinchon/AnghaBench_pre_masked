
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 if (VAR_1)
  FUNC_1("EOF in comment");
 FUNC_0();
 if (VAR_3 && FUNC_4(VAR_4, VAR_2) == -1) {
  FUNC_6("couldn't rename temporary file");
  FUNC_5(VAR_4);
  FUNC_2(2, "%s unchanged", VAR_2);
 }
 FUNC_3(VAR_0);
}
