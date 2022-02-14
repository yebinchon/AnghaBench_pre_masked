
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct pcap_filehdr {scalar_t__ magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,struct stat*) ;
 scalar_t__ FUNC_2 (int *,int,int ,int,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_12)
{
 struct pcap_filehdr *VAR_13;
 struct stat VAR_14;
 int VAR_15;

 VAR_9 = FUNC_3(VAR_12, VAR_5);
 if (VAR_9 < 0) {
  FUNC_5("cannot open pcap [%s]!\n", FUNC_6(VAR_8));
  return VAR_0;
 }

 VAR_15 = FUNC_1(VAR_9, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_5("cannot fstat pcap file!\n");
  return VAR_0;
 }

 if (!FUNC_0(VAR_14.st_mode)) {
  FUNC_5("not a regular pcap file, duh!\n");
  return VAR_0;
 }

 VAR_10 = VAR_14.st_size;
 if (VAR_10 <= sizeof(struct pcap_filehdr)) {
  FUNC_5("pcap file too small!\n");
  return VAR_0;
 }

 VAR_11 = FUNC_2(((void*)0), VAR_10, VAR_6,
     VAR_4 | VAR_3, VAR_9, 0);
 if (VAR_11 == VAR_2) {
  FUNC_5("mmap of file failed!");
  return VAR_0;
 }

 VAR_13 = (void *) VAR_11;
 if (VAR_13->magic != VAR_7) {
  FUNC_5("wrong pcap magic!\n");
  return VAR_0;
 }

 FUNC_4();

 return VAR_1;

}
