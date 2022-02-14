
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct termios {long* c_cc; } ;
struct TYPE_3__ {int read_total_timeout_multiplier; int read_total_timeout_constant; int read_interval_timeout; struct termios* ptermios; } ;
typedef TYPE_1__ SERIAL_DEVICE ;
typedef int RDPCLIENT ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int ,struct termios*) ;

__attribute__((used)) static NTSTATUS
FUNC_6(RDPCLIENT * VAR_5, NTHANDLE VAR_6, uint8 * VAR_7, uint32 VAR_8, uint32 VAR_9, uint32 * VAR_10)
{
 long VAR_11;
 SERIAL_DEVICE *VAR_12;
 struct termios *VAR_13;





 VAR_11 = 90;
 VAR_12 = FUNC_1(VAR_5, VAR_6);
 VAR_13 = VAR_12->ptermios;



 if (VAR_12->read_total_timeout_multiplier | VAR_12->read_total_timeout_constant)
 {
  VAR_11 =
   (VAR_12->read_total_timeout_multiplier * VAR_8 +
    VAR_12->read_total_timeout_constant + 99) / 100;
 }
 else if (VAR_12->read_interval_timeout)
 {
  VAR_11 = (VAR_12->read_interval_timeout * VAR_8 + 99) / 100;
 }




 if (VAR_11 == 0)
 {
  VAR_13->c_cc[VAR_4] = 0;
  VAR_13->c_cc[VAR_3] = 0;
 }
 else
 {
  VAR_13->c_cc[VAR_4] = VAR_11;
  VAR_13->c_cc[VAR_3] = 1;
 }
 FUNC_5(VAR_6, VAR_1, VAR_13);






 *VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8);







 return VAR_0;
}
