
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cdio_log_level_t ;







 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;

extern void
FUNC_5(cdio_log_level_t VAR_4, const char VAR_5[])
{
  switch (VAR_4)
    {
    case 130:
      if (VAR_4 >= VAR_1) {
        FUNC_4 (VAR_2, "**ERROR: %s\n", VAR_5);
        FUNC_3 (VAR_2);
      }
      FUNC_2 (VAR_0);
      break;
    case 131:
      if (VAR_4 >= VAR_1) {
        FUNC_4 (VAR_3, "--DEBUG: %s\n", VAR_5);
      }
      break;
    case 128:
      if (VAR_4 >= VAR_1) {
        FUNC_4 (VAR_3, "++ WARN: %s\n", VAR_5);
      }
      break;
    case 129:
      if (VAR_4 >= VAR_1) {
        FUNC_4 (VAR_3, "   INFO: %s\n", VAR_5);
      }
      break;
    case 132:
      if (VAR_4 >= VAR_1) {
        FUNC_4 (VAR_2, "!ASSERT: %s\n", VAR_5);
        FUNC_3 (VAR_2);
      }
      FUNC_0 ();
      break;
    default:
      FUNC_1 ();
      break;
    }

  FUNC_3 (VAR_3);
}
