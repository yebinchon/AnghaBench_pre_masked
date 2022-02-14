
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (VAR_10 || VAR_5)
  return;

 if (!VAR_9 && !VAR_1)
 {
  if (VAR_6)
  {
   FUNC_1("removing data directory \"%s\"", VAR_0);
   if (!FUNC_2(VAR_0, 1))
    FUNC_0("failed to remove data directory");
  }
  else if (VAR_2)
  {
   FUNC_1("removing contents of data directory \"%s\"", VAR_0);
   if (!FUNC_2(VAR_0, 0))
    FUNC_0("failed to remove contents of data directory");
  }

  if (VAR_7)
  {
   FUNC_1("removing WAL directory \"%s\"", VAR_11);
   if (!FUNC_2(VAR_11, 1))
    FUNC_0("failed to remove WAL directory");
  }
  else if (VAR_3)
  {
   FUNC_1("removing contents of WAL directory \"%s\"", VAR_11);
   if (!FUNC_2(VAR_11, 0))
    FUNC_0("failed to remove contents of WAL directory");
  }
 }
 else
 {
  if ((VAR_6 || VAR_2) && !VAR_1)
   FUNC_1("data directory \"%s\" not removed at user's request", VAR_0);

  if (VAR_7 || VAR_3)
   FUNC_1("WAL directory \"%s\" not removed at user's request", VAR_11);
 }

 if ((VAR_8 || VAR_4) && !VAR_1)
  FUNC_1("changes to tablespace directories will not be undone");
}
