
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (VAR_6)
  return;

 if (!VAR_4)
 {
  if (VAR_2)
  {
   FUNC_1("removing data directory \"%s\"", VAR_5);
   if (!FUNC_2(VAR_5, 1))
    FUNC_0("failed to remove data directory");
  }
  else if (VAR_0)
  {
   FUNC_1("removing contents of data directory \"%s\"",
      VAR_5);
   if (!FUNC_2(VAR_5, 0))
    FUNC_0("failed to remove contents of data directory");
  }

  if (VAR_3)
  {
   FUNC_1("removing WAL directory \"%s\"", VAR_7);
   if (!FUNC_2(VAR_7, 1))
    FUNC_0("failed to remove WAL directory");
  }
  else if (VAR_1)
  {
   FUNC_1("removing contents of WAL directory \"%s\"", VAR_7);
   if (!FUNC_2(VAR_7, 0))
    FUNC_0("failed to remove contents of WAL directory");
  }

 }
 else
 {
  if (VAR_2 || VAR_0)
   FUNC_1("data directory \"%s\" not removed at user's request",
      VAR_5);

  if (VAR_3 || VAR_1)
   FUNC_1("WAL directory \"%s\" not removed at user's request",
      VAR_7);
 }
}
