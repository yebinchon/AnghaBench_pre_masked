
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct img_header {int header_len; int region; int version; int signature; int model; void* kernel_size; void* image_size; void* checksum; } ;
struct TYPE_4__ {int write_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*,int) ;
 void* FUNC_3 (int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_10;
 char *VAR_11;
 char *VAR_12;
 uint32_t VAR_13;
 struct img_header *VAR_14;
 int VAR_15 = VAR_0;

 VAR_10 = sizeof(struct img_header) +
   VAR_3.write_size + VAR_7.write_size;

 VAR_11 = FUNC_4(VAR_10);
 if (!VAR_11) {
  FUNC_0("no memory for buffer\n");
  goto out;
 }

 FUNC_5(VAR_11, 0, VAR_10);

 VAR_12 = VAR_11 + sizeof(struct img_header);


 VAR_15 = FUNC_6(&VAR_3, VAR_12);
 if (VAR_15)
  goto out_free_buf;

 if (!VAR_2) {
  VAR_12 += VAR_3.write_size;


  VAR_15 = FUNC_6(&VAR_7, VAR_12);
  if (VAR_15)
   goto out_free_buf;
 }

 VAR_13 = FUNC_2((unsigned char *)(VAR_11 + sizeof(struct img_header)),
   VAR_10 - sizeof(struct img_header));


 VAR_14 = (struct img_header *) VAR_11;

 VAR_14->checksum = FUNC_3(VAR_13);
 VAR_14->image_size = FUNC_3(VAR_10 - sizeof(struct img_header));
 if (!VAR_2)
  VAR_14->kernel_size = FUNC_3(VAR_3.write_size);
 else
  VAR_14->kernel_size = FUNC_3(VAR_4);
 VAR_14->header_len = sizeof(struct img_header);
 FUNC_7(VAR_14->model, VAR_5, sizeof(VAR_14->model));
 FUNC_7(VAR_14->signature, VAR_8, sizeof(VAR_14->signature));
 FUNC_7(VAR_14->version, VAR_9, sizeof(VAR_14->version));
 FUNC_7(VAR_14->region, VAR_6, sizeof(VAR_14->region));

 VAR_15 = FUNC_8(VAR_11, VAR_10);
 if (VAR_15)
  goto out_free_buf;

 VAR_15 = VAR_1;

out_free_buf:
 FUNC_1(VAR_11);
out:
 return VAR_15;
}
