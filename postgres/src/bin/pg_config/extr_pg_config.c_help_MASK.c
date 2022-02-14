
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(FUNC_0("\n%s provides information about the installed version of PostgreSQL.\n\n"), VAR_0);
 FUNC_1(FUNC_0("Usage:\n"));
 FUNC_1(FUNC_0("  %s [OPTION]...\n\n"), VAR_0);
 FUNC_1(FUNC_0("Options:\n"));
 FUNC_1(FUNC_0("  --bindir              show location of user executables\n"));
 FUNC_1(FUNC_0("  --docdir              show location of documentation files\n"));
 FUNC_1(FUNC_0("  --htmldir             show location of HTML documentation files\n"));
 FUNC_1(FUNC_0("  --includedir          show location of C header files of the client\n"
    "                        interfaces\n"));
 FUNC_1(FUNC_0("  --pkgincludedir       show location of other C header files\n"));
 FUNC_1(FUNC_0("  --includedir-server   show location of C header files for the server\n"));
 FUNC_1(FUNC_0("  --libdir              show location of object code libraries\n"));
 FUNC_1(FUNC_0("  --pkglibdir           show location of dynamically loadable modules\n"));
 FUNC_1(FUNC_0("  --localedir           show location of locale support files\n"));
 FUNC_1(FUNC_0("  --mandir              show location of manual pages\n"));
 FUNC_1(FUNC_0("  --sharedir            show location of architecture-independent support files\n"));
 FUNC_1(FUNC_0("  --sysconfdir          show location of system-wide configuration files\n"));
 FUNC_1(FUNC_0("  --pgxs                show location of extension makefile\n"));
 FUNC_1(FUNC_0("  --configure           show options given to \"configure\" script when\n"
    "                        PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --cc                  show CC value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --cppflags            show CPPFLAGS value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --cflags              show CFLAGS value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --cflags_sl           show CFLAGS_SL value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --ldflags             show LDFLAGS value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --ldflags_ex          show LDFLAGS_EX value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --ldflags_sl          show LDFLAGS_SL value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --libs                show LIBS value used when PostgreSQL was built\n"));
 FUNC_1(FUNC_0("  --version             show the PostgreSQL version\n"));
 FUNC_1(FUNC_0("  -?, --help            show this help, then exit\n"));
 FUNC_1(FUNC_0("\nWith no arguments, all known items are shown.\n\n"));
 FUNC_1(FUNC_0("Report bugs to <pgsql-bugs@lists.postgresql.org>.\n"));
}
