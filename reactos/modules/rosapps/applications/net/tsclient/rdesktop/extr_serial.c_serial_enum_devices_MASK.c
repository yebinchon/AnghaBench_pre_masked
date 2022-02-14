
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32 ;
struct termios {int dummy; } ;
struct TYPE_7__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_6__ {struct termios* pold_termios; struct termios* ptermios; } ;
struct TYPE_5__ {char* name; char* local_path; void* pdevice_data; int device_type; } ;
typedef TYPE_2__ SERIAL_DEVICE ;
typedef TYPE_3__ RDPCLIENT ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct termios*,int ,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;

int
FUNC_7(RDPCLIENT * VAR_2, uint32 * VAR_3, char *VAR_4)
{
 SERIAL_DEVICE *VAR_5;

 char *VAR_6 = VAR_4;
 char *VAR_7;
 int VAR_8 = 0;


 VAR_4++;
 while ((VAR_6 = FUNC_1(VAR_4, ',')) && *VAR_3 < VAR_1)
 {

  VAR_5 = (SERIAL_DEVICE *) FUNC_6(sizeof(SERIAL_DEVICE));
  VAR_5->ptermios = (struct termios *) FUNC_6(sizeof(struct termios));
  FUNC_0(VAR_5->ptermios, 0, sizeof(struct termios));
  VAR_5->pold_termios = (struct termios *) FUNC_6(sizeof(struct termios));
  FUNC_0(VAR_5->pold_termios, 0, sizeof(struct termios));

  VAR_7 = FUNC_1(VAR_4, '=');
  FUNC_3(VAR_2->rdpdr_device[*VAR_3].name, VAR_4);

  FUNC_5(VAR_2->rdpdr_device[*VAR_3].name);

  VAR_2->rdpdr_device[*VAR_3].local_path = FUNC_6(FUNC_4(VAR_7) + 1);
  FUNC_3(VAR_2->rdpdr_device[*VAR_3].local_path, VAR_7);
  FUNC_2("SERIAL %s to %s\n", VAR_2->rdpdr_device[*VAR_3].name,
         VAR_2->rdpdr_device[*VAR_3].local_path);

  VAR_2->rdpdr_device[*VAR_3].device_type = VAR_0;
  VAR_2->rdpdr_device[*VAR_3].pdevice_data = (void *) VAR_5;
  VAR_8++;
  (*VAR_3)++;

  VAR_4 = VAR_6;
 }
 return VAR_8;
}
