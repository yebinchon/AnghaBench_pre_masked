
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_4("could not get commit timestamp data"),
    FUNC_0() ?
    FUNC_3("Make sure the configuration parameter \"%s\" is set on the master server.",
      "track_commit_timestamp") :
    FUNC_3("Make sure the configuration parameter \"%s\" is set.",
      "track_commit_timestamp")));
}
