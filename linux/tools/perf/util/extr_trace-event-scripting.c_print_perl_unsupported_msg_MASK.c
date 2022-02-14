
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0(VAR_0, "Perl scripting not supported."
  "  Install libperl and rebuild perf to enable it.\n"
  "For example:\n  # apt-get install libperl-dev (ubuntu)"
  "\n  # yum install 'perl(ExtUtils::Embed)' (Fedora)"
  "\n  etc.\n");
}
