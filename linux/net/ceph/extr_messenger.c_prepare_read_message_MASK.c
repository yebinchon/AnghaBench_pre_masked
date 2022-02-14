
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {scalar_t__ in_data_crc; scalar_t__ in_middle_crc; scalar_t__ in_front_crc; scalar_t__ in_base_pos; int * in_msg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct ceph_connection*) ;

__attribute__((used)) static int FUNC_2(struct ceph_connection *VAR_0)
{
 FUNC_1("prepare_read_message %p\n", VAR_0);
 FUNC_0(VAR_0->in_msg != ((void*)0));
 VAR_0->in_base_pos = 0;
 VAR_0->in_front_crc = VAR_0->in_middle_crc = VAR_0->in_data_crc = 0;
 return 0;
}
