
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {int ourHostName; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_3 (int ,char) ;
 int FUNC_4 (int *) ;

void
FUNC_5(FILE *VAR_5)
{
 char *VAR_6;
 time_t VAR_7;

 FUNC_0(&VAR_0);
 VAR_6 = FUNC_3(VAR_0.ourHostName, '.');

 (void) FUNC_2(VAR_5, "%s", "# NcFTP firewall preferences\n# ==========================\n#\n");





 (void) FUNC_2(VAR_5, "%s", "# If you need to use a proxy for FTP, you can configure it below.\n# If you do not need one, leave the ``firewall-type'' variable set\n# to 0.  Any line that does not begin with the ``#'' character is\n# considered a configuration command line.\n");





 (void) FUNC_2(VAR_5, "%s", "#\n# NOTE:  NcFTP does NOT support HTTP proxies that do FTP, such as \"squid\"\n#        or Netscape Proxy Server.  Why?  Because you have to communicate with\n#        them using HTTP, and this is a FTP only program.\n");





 (void) FUNC_2(VAR_5, "%s", "#\n# Types of firewalls:\n# ------------------\n#\n#    type 1:  Connect to firewall host, but send \"USER user@real.host.name\"\n#\n");







 (void) FUNC_2(VAR_5, "%s", "#    type 2:  Connect to firewall, login with \"USER fwuser\" and\n#             \"PASS fwpassword\", and then \"USER user@real.host.name\"\n#\n#    type 3:  Connect to and login to firewall, and then use\n#             \"SITE real.host.name\", followed by the regular USER and PASS.\n#\n");







 (void) FUNC_2(VAR_5, "%s", "#    type 4:  Connect to and login to firewall, and then use\n#             \"OPEN real.host.name\", followed by the regular USER and PASS.\n#\n#    type 5:  Connect to firewall host, but send\n#             \"USER user@fwuser@real.host.name\" and\n#             \"PASS pass@fwpass\" to login.\n#\n");
 (void) FUNC_2(VAR_5, "%s", "#    type 6:  Connect to firewall host, but send\n#             \"USER fwuser@real.host.name\" and\n#             \"PASS fwpass\" followed by a regular\n#             \"USER user\" and\n#             \"PASS pass\" to complete the login.\n#\n");







 (void) FUNC_2(VAR_5, "%s", "#    type 7:  Connect to firewall host, but send\n#             \"USER user@real.host.name fwuser\" and\n#             \"PASS pass\" followed by\n#             \"ACCT fwpass\" to complete the login.\n#\n#    type 0:  Do NOT use a firewall (most users will choose this).\n#\nfirewall-type=0\n#\n#\n#\n");
 (void) FUNC_2(VAR_5, "%s", "# The ``firewall-host'' variable should be the IP address or hostname of\n# your firewall server machine.\n#\n");





 if (VAR_6 == ((void*)0)) {
  (void) FUNC_2(VAR_5, "firewall-host=firewall.domain.com\n");
 } else {
  (void) FUNC_2(VAR_5, "firewall-host=firewall%s\n", VAR_6);
 }

 (void) FUNC_2(VAR_5, "%s", "#\n#\n#\n# The ``firewall-user'' variable tells NcFTP what to use as the user ID\n# when it logs in to the firewall before connecting to the outside world.\n#\n");







 (void) FUNC_2(VAR_5, "firewall-user=%s\n", VAR_1);
 (void) FUNC_2(VAR_5, "%s", "#\n#\n#\n# The ``firewall-password'' variable is the password associated with\n# the firewall-user ID.  If you set this here, be sure to change the\n# permissions on this file so that no one (except the superuser) can\n# see your password.  You may also leave this commented out, and then\n# NcFTP will prompt you each time for the password.\n");
 (void) FUNC_2(VAR_5, "%s", "#\nfirewall-password=fwpass\n#\n#\n#\n# Your firewall may require you to connect to a non-standard port for\n# outside FTP services, instead of the internet standard port number (21).\n#\nfirewall-port=21\n");
 (void) FUNC_2(VAR_5, "%s", "#\n#\n#\n# You probably do not want to FTP to the firewall for hosts on your own\n# domain.  You can set ``firewall-exception-list'' to a list of domains\n# or hosts where the firewall should not be used.  For example, if your\n# domain was ``probe.net'' you could set this to ``.probe.net''.\n#\n");
 (void) FUNC_2(VAR_5, "%s", "# If you leave this commented out, the default behavior is to attempt to\n# lookup the current domain, and exclude hosts for it.  Otherwise, set it\n# to a list of comma-delimited domains or hostnames.  The special token\n# ``localdomain'' is used for unqualified hostnames, so if you want hosts\n# without explicit domain names to avoid the firewall, be sure to include\n# that in your list.\n#\n");
 if (VAR_6 != ((void*)0)) {
  (void) FUNC_2(VAR_5, "firewall-exception-list=%s,localhost,localdomain\n", VAR_6);
 } else {
  (void) FUNC_2(VAR_5, "firewall-exception-list=.probe.net,localhost,foo.bar.com,localdomain\n");
 }

 (void) FUNC_2(VAR_5, "%s", "#\n#\n#\n# You may also specify passive mode here.  Normally this is set in the\n# regular $HOME/.ncftp/prefs file.  This must be set to one of\n# \"on\", \"off\", or \"optional\", which mean always use PASV,\n# always use PORT, and try PASV then PORT, respectively.\n#\n#passive=on\n");
 FUNC_4(&VAR_7);
 (void) FUNC_2(VAR_5, "#\n#\n#\n# NOTE:  This file was created for you on %s#        by NcFTP %.5s.  Removing this file will cause the next run of NcFTP\n#        to generate a new one, possibly with more configurable options.\n",






 FUNC_1(&VAR_7),
 VAR_2 + 11);
 (void) FUNC_2(VAR_5, "#\n# ALSO:  A %s file, if present, is processed before this file,\n#        and a %s file, if present, is processed after.\n",



  VAR_3,
  VAR_4
 );
}
