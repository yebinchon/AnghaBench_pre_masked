
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned char u32 ;
struct trace_seq {char* buffer; int len; } ;
typedef int sector_t ;




 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

__attribute__((used)) static const char *
FUNC_3(struct trace_seq *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 const char *VAR_3 = VAR_0->buffer + VAR_0->len, *VAR_4;
 sector_t VAR_5 = 0;
 u32 VAR_6 = 0;

 switch (FUNC_0(VAR_1)) {
 case 128:
  VAR_4 = "READ_CAPACITY_16";
  break;
 case 129:
  VAR_4 = "GET_LBA_STATUS";
  break;
 default:
  FUNC_1(VAR_0, "UNKNOWN");
  goto out;
 }

 VAR_5 |= ((u64)VAR_1[2] << 56);
 VAR_5 |= ((u64)VAR_1[3] << 48);
 VAR_5 |= ((u64)VAR_1[4] << 40);
 VAR_5 |= ((u64)VAR_1[5] << 32);
 VAR_5 |= (VAR_1[6] << 24);
 VAR_5 |= (VAR_1[7] << 16);
 VAR_5 |= (VAR_1[8] << 8);
 VAR_5 |= VAR_1[9];
 VAR_6 |= (VAR_1[10] << 24);
 VAR_6 |= (VAR_1[11] << 16);
 VAR_6 |= (VAR_1[12] << 8);
 VAR_6 |= VAR_1[13];

 FUNC_1(VAR_0, "%s lba=%llu alloc_len=%u", VAR_4,
    (unsigned long long)VAR_5, VAR_6);

out:
 FUNC_2(VAR_0, 0);
 return VAR_3;
}
