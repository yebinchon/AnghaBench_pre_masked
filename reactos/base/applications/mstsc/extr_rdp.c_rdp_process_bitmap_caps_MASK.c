
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16 ;
typedef int STREAM ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_5(STREAM VAR_3)
{
 uint16 VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_3, VAR_6);
 FUNC_2(VAR_3, 6);

 FUNC_1(VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_5);

 FUNC_0(("setting desktop size and depth to: %dx%dx%d\n", VAR_4, VAR_5, VAR_6));





 if (VAR_1 != VAR_6)
 {
  FUNC_4("Remote desktop does not support colour depth %d; falling back to %d\n",
   VAR_1, VAR_6);
  VAR_1 = VAR_6;
 }
 if (VAR_2 != VAR_4 || VAR_0 != VAR_5)
 {
  FUNC_4("Remote desktop changed from %dx%d to %dx%d.\n", VAR_2, VAR_0,
   VAR_4, VAR_5);
  VAR_2 = VAR_4;
  VAR_0 = VAR_5;
  FUNC_3();
 }
}
