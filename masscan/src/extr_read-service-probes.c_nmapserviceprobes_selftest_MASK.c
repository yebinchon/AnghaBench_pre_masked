
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NmapServiceProbeList {unsigned int line_number; } ;


 struct NmapServiceProbeList* FUNC_0 (char*) ;
 int FUNC_1 (struct NmapServiceProbeList*,char const*) ;

int
FUNC_2(void)
{
    const char *VAR_0[] = {
        "Exclude 53,T:9100,U:30000-40000\n",
        "Probe UDP DNSStatusRequest q|\\0\\0\\x10\\0\\0\\0\\0\\0\\0\\0\\0\\0|\n",
        "Probe TCP GetRequest q|GET / HTTP/1.0\r\n\r\n|\n",
        "ports 80\n",
        "sslports 443\n",
        "Probe TCP NULL q||\n",
        "ports 21,43,110,113,199,505,540,1248,5432,30444\n",
        "match ftp m/^220.*Welcome to .*Pure-?FTPd (\\d\\S+\\s*)/ p/Pure-FTPd/ v/$1/ cpe:/a:pureftpd:pure-ftpd:$1/\n",
        "match ssh m/^SSH-([\\d.]+)-OpenSSH[_-]([\\w.]+)\\r?\\n/i p/OpenSSH/ v/$2/ i/protocol $1/ cpe:/a:openbsd:openssh:$2/\n",
        "match mysql m|^\\x10\\0\\0\\x01\\xff\\x13\\x04Bad handshake$| p/MySQL/ cpe:/a:mysql:mysql/\n",
        "match chargen m|@ABCDEFGHIJKLMNOPQRSTUVWXYZ|\n",
        "match uucp m|^login: login: login: $| p/NetBSD uucpd/ o/NetBSD/ cpe:/o:netbsd:netbsd/a\n",
        "match printer m|^([\\w-_.]+): lpd: Illegal service request\\n$| p/lpd/ h/$1/\n",
        "match afs m|^[\\d\\D]{28}\\s*(OpenAFS)([\\d\\.]{3}[^\\s\\0]*)\\0| p/$1/ v/$2/\n",
        0
    };
    unsigned VAR_1;
    struct NmapServiceProbeList *VAR_2 = FUNC_0("<selftest>");

    for (VAR_1=0; VAR_0[VAR_1]; VAR_1++) {
        VAR_2->line_number = VAR_1;
        FUNC_1(VAR_2, VAR_0[VAR_1]);
    }


    return 0;
}
