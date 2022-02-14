
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmFile {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chmFile*,int ,int ,int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_2, struct chmFile *VAR_3)
{
    FUNC_1(VAR_2,
            "HTTP/1.1 200 OK\r\n"
            "Connection: close\r\n"

            "Content-Type: text/html\r\n\r\n"

            "<h2><u>CHM contents:</u></h2>"
            "<body><table>"
            "<tr><td><h5>Size:</h5></td><td><h5>File:</h5></td></tr>"
            "<tt>");
    if (! FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2))
        FUNC_1(VAR_2,"<br>   *** ERROR ***\r\n");
    FUNC_1(VAR_2,"</tt> </table></body></html>");
}
