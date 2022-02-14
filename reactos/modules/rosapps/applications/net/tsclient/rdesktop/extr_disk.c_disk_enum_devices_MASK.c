
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_4__ {char* name; char* local_path; int device_type; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 char* FUNC_1 (char*,char) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(RDPCLIENT * VAR_3, uint32 * VAR_4, char *VAR_5)
{
 char *VAR_6 = VAR_5;
 char *VAR_7;
 int VAR_8 = 0;


 VAR_5++;
 while ((VAR_6 = FUNC_1(VAR_5, ',')) && *VAR_4 < VAR_1)
 {
  VAR_7 = FUNC_1(VAR_5, '=');

  FUNC_4(VAR_3->rdpdr_device[*VAR_4].name, VAR_5, sizeof(VAR_3->rdpdr_device[*VAR_4].name) - 1);
  if (FUNC_3(VAR_5) > (sizeof(VAR_3->rdpdr_device[*VAR_4].name) - 1))
   FUNC_0(VAR_2, "share name %s truncated to %s\n", VAR_5,
    VAR_3->rdpdr_device[*VAR_4].name);

  VAR_3->rdpdr_device[*VAR_4].local_path = (char *) FUNC_5(FUNC_3(VAR_7) + 1);
  FUNC_2(VAR_3->rdpdr_device[*VAR_4].local_path, VAR_7);
  VAR_3->rdpdr_device[*VAR_4].device_type = VAR_0;
  VAR_8++;
  (*VAR_4)++;

  VAR_5 = VAR_6;
 }
 return VAR_8;
}
