
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int magic_number; int version_major; int version_minor; int snaplen; int network; int sigfigs; int thiszone; } ;
typedef TYPE_1__ pcap_hdr_t ;
typedef int ghdr ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int *) ;

void FUNC_1(FILE *VAR_1)
{
 pcap_hdr_t VAR_2 = {
  .magic_number = 0xa1b2c3d4,
  .version_major = 2,
  .version_minor = 4,
  .thiszone = 0,
  .sigfigs = 0,
  .snaplen = 0xFFFF,
  .network = VAR_0
 };

 FUNC_0(&VAR_2, 1, sizeof(VAR_2), VAR_1);
}
