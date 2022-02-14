
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{
 FILE *VAR_4;




 VAR_4 = VAR_3;
 (void) FUNC_2(VAR_4, "\nUsage:  ncftp [flags] [<host> | <directory URL to browse>]\n");
 (void) FUNC_2(VAR_4, "\nFlags:\n  -u XX  Use username XX instead of anonymous.\n  -p XX  Use password XX with the username.\n  -P XX  Use port number XX instead of the default FTP service port (21).\n  -j XX  Use account XX with the username (rarely needed).\n  -F     Dump a sample $HOME/.ncftp/firewall prefs file to stdout and exit.\n");






 (void) FUNC_2(VAR_4, "\nProgram version:  %s\nLibrary version:  %s\n", VAR_2 + 5, VAR_1 + 5);




 (void) FUNC_2(VAR_4, "\nThis is a freeware program by Mike Gleason (ncftp@ncftp.com).\n");
 (void) FUNC_2(VAR_4, "Use ncftpget and ncftpput for command-line FTP.\n\n");
 FUNC_1(2);
}
